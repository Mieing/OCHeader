@class NSString;

@interface AWESearchEnterVideoDetailManager : NSObject

@property (nonatomic) BOOL alreadyEntered;
@property (retain, nonatomic) NSString *itemID;

+ (id)shareInstance;

- (void)resetEnteredDetail;
- (BOOL)haveAlreadyEnteredDetailWithitemID:(id)a0;
- (void)setAlreadyEnteredDetailWithitemID:(id)a0;
- (void).cxx_destruct;

@end
