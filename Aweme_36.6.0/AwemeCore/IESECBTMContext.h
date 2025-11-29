@class NSString, UIResponder;

@interface IESECBTMContext : NSObject

@property (retain, nonatomic) NSString *btmInfo;
@property (weak, nonatomic) UIResponder *host;
@property (nonatomic) BOOL enterNewPage;

+ (id)createInnerCtx:(id)a0 host:(id)a1;
+ (id)createJumpCtx:(id)a0 host:(id)a1;

- (id)initWithBtmInfo:(id)a0 host:(id)a1 enterNewPage:(BOOL)a2;
- (void).cxx_destruct;

@end
