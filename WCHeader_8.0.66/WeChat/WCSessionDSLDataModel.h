@class NSString;

@interface WCSessionDSLDataModel : MMObject

@property (retain, nonatomic) NSString *fieldName;
@property (retain, nonatomic) NSString *fieldType;
@property (retain, nonatomic) NSString *containerIndex;
@property (retain, nonatomic) NSString *containerKey;
@property (retain, nonatomic) NSString *methodName;
@property (retain, nonatomic) NSString *methodAttr;
@property (nonatomic) unsigned int chainIndex;

- (id)toString;
- (void).cxx_destruct;

@end
