@class NSArray, Protocol;

@interface ACCServiceBinding : NSObject

@property (retain, nonatomic) Protocol *serciceProtocol;
@property (retain, nonatomic) NSArray *serciceProtocols;
@property (retain, nonatomic) id serviceImpl;

- (void).cxx_destruct;

@end
