@class IESBridgeMethod;

@interface IESBridgeMethodQueryResult : NSObject

@property (nonatomic) BOOL hasMethodRegardlessOfNamespace;
@property (retain, nonatomic) IESBridgeMethod *method;

- (void).cxx_destruct;

@end
