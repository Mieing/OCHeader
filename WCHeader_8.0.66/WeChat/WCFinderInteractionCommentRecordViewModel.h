@class NSData, NSString, WCFinderContact, NSArray, WCFinderFeedContentVM, NSMutableArray, NSDiffableDataSourceSnapshot, WCFinderFooterConfiguration;
@protocol WCFinderInteractionCommentRecordViewModelDelegate;

@interface WCFinderInteractionCommentRecordViewModel : NSObject

@property (retain, nonatomic) NSString *targetUserName;
@property (retain, nonatomic) NSMutableArray *mentionList;
@property (retain, nonatomic) NSMutableArray *mentionListConfigs;
@property (retain, nonatomic) WCFinderFooterConfiguration *footerConfig;
@property (nonatomic) BOOL isNoMoreData;
@property (nonatomic) long long latestEvent;
@property (copy, nonatomic) NSData *pageBuffer;
@property (weak, nonatomic) id<WCFinderInteractionCommentRecordViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderFeedContentVM *jumpFeedContentVM;
@property (readonly, nonatomic) WCFinderContact *selfContact;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *snapshot;

- (id)initWithTargetUserName:(id)a0;
- (id)_footerSection;
- (void)fetchCommentLists;
- (void)fetchFeedContentVMForIndexPath:(id)a0;
- (void)_appendMentionList:(id)a0;
- (void)_cgiFetchCommentList;
- (void)_cgiFetchDataItemWithMention:(id)a0;
- (BOOL)isCGILoading;
- (void).cxx_destruct;

@end
