@class NSString;

@interface MMWebTopBarStyleConfig : NSObject

@property (retain, nonatomic) NSString *identity;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) BOOL isHideLoad;

+ (id)topBarStyleWithId:(id)a0 priority:(unsigned long long)a1 text:(id)a2 andHideLoad:(BOOL)a3;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
