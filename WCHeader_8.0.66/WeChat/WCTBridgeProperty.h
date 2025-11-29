@class NSString;

@interface WCTBridgeProperty : NSObject {
    const void *m_innerProperty;
}

@property (readonly, nonatomic) NSString *propertyName;

+ (id)creatBridgeProperty:(const void *)a0;

- (const void *)wctProperty;
- (const void *)tableBinding;

@end
