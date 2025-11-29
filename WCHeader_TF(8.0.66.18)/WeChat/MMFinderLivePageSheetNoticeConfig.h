@class NSString, NSMutableArray, NSArray;

@interface MMFinderLivePageSheetNoticeConfig : NSObject

@property (retain, nonatomic) NSMutableArray *mActions;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (readonly, nonatomic) NSArray *actions;

- (void)addAction:(id)a0;
- (void).cxx_destruct;

@end
