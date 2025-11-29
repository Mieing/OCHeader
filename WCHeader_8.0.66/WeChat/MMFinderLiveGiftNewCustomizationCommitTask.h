@class NSString, NSArray;

@interface MMFinderLiveGiftNewCustomizationCommitTask : NSObject

@property (retain, nonatomic) NSString *giftProductId;
@property (nonatomic) BOOL modifyNewCustomText;
@property (retain, nonatomic) NSString *customText;
@property (retain, nonatomic) NSArray *componentKeyList;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
