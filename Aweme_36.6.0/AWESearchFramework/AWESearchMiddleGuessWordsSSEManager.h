@class NSDictionary, NSDate;

@interface AWESearchMiddleGuessWordsSSEManager : NSObject

@property (copy, nonatomic) NSDictionary *middleGSData;
@property (retain, nonatomic) NSDate *updateD;

+ (id)sharedInstance;

- (void)clearSSEMiddlePageGSData;
- (void)updateSSEMiddlePageGSData:(id)a0;
- (id)getValidMiddlePageGSData;
- (void).cxx_destruct;

@end
