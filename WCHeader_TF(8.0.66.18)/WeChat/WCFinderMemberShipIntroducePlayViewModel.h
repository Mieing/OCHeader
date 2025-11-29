@class NSMutableArray;

@interface WCFinderMemberShipIntroducePlayViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *contentVMs;
@property (nonatomic) int feedType;

- (id)initWithContentVMs:(id)a0 feedType:(int)a1 headerData:(id)a2;
- (id)genNewContentVMs:(id)a0 feedType:(int)a1 headerData:(id)a2;
- (unsigned long long)allDataCount;
- (long long)indexOfTid:(id)a0;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (id)contentVMOfTid:(id)a0;
- (void)deleteContentVM:(id)a0;
- (int)feedViewControllerScene;
- (void).cxx_destruct;

@end
