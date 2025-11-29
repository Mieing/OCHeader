@class NSArray, NSMutableArray, NSString;

@interface AWEPlayInteractionDescriptionElementConfig : NSObject

@property (retain, nonatomic) NSMutableArray *controllersMutArr;
@property (retain, nonatomic) NSArray *controllersArray;
@property (copy, nonatomic) NSString *referString;

- (void)registerParserWithClassString:(id)a0;
- (void)registerParsers;
- (void).cxx_destruct;

@end
