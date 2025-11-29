@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEPlayerHandlerContext : NSObject

@property (weak, nonatomic) AWEAwemeModel *curAweme;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSDictionary *extraData;

- (void).cxx_destruct;

@end
