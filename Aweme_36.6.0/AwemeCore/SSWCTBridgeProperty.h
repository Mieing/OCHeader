@class NSString;

@interface SSWCTBridgeProperty : NSObject {
    const void *m_innerProperty;
}

@property (readonly, nonatomic) NSString *propertyName;

+ (id)creatBridgeProperty:(const void *)a0;

- (const void *)SSWCTProperty;
- (const void *)tableBinding;

@end
