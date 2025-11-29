@class WCFinderMJSetInitParams, NSString, WCFinderMJTempInfo, NSArray, NSMutableArray;
@protocol WCFinderMJSetTemplateViewModelDelegate;

@interface WCFinderMJSetTemplateViewModel : NSObject

@property (copy, nonatomic) NSString *topicId;
@property (retain, nonatomic) NSMutableArray *mutTabs;
@property (retain, nonatomic) WCFinderMJTempInfo *mjTempInfo;
@property (retain, nonatomic) WCFinderMJSetInitParams *params;
@property (weak, nonatomic) id<WCFinderMJSetTemplateViewModelDelegate> delegate;
@property (readonly, nonatomic) NSArray *tabs;

+ (id)genShareToFriendMessageWrapWithItem:(id)a0;
+ (unsigned long long)genFinderShareItemType;

- (id)initWithParams:(id)a0;
- (void)requestTabs;
- (void)shareToMoment:(id)a0;
- (long long)genShareMomentType;
- (void).cxx_destruct;

@end
