@class NSString;

@interface QGPCommandConfig : NSObject

@property SEL selector;
@property (nonatomic) BOOL hasReturn;
@property (retain, nonatomic) NSString *commandClsName;

+ (id)createSelector:(SEL)a0 commandClsName:(id)a1 hasReturn:(BOOL)a2;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
