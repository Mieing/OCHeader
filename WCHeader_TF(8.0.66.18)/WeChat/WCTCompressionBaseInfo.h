@class NSString;

@interface WCTCompressionBaseInfo : NSObject {
    const void *m_baseInfo;
}

@property (readonly, nonatomic) NSString *table;

- (id)initWithBaseInfo:(const void *)a0;

@end
