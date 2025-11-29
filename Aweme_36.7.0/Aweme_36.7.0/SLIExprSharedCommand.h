@class NSDictionary;

@interface SLIExprSharedCommand : NSObject

@property (class, readonly, nonatomic) NSDictionary *unaryOperatorCommands;
@property (class, readonly, nonatomic) NSDictionary *binaryOperatorCommands;
@property (class, readonly, nonatomic) NSDictionary *functionCommands;
@property (class, readonly, nonatomic) NSDictionary *constCommands;
@property (class, readonly, nonatomic) NSDictionary *commonConstCommands;
@property (class, readonly, nonatomic) NSDictionary *identifierCommands;

+ (void)initialize;

@end
