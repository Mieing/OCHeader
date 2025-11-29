@class NSString;

@interface IESIMFTSVirtualData : NSObject <WCTTableCoding, IESIMFTSDataProtocol> {
    BOOL _isAutoIncrement;
}

@property (copy, nonatomic) NSString *offsets;
@property (nonatomic) long long docid;
@property (copy, nonatomic) NSString *busid;
@property (copy, nonatomic) NSString *groupid;
@property (nonatomic) long long busType;
@property (nonatomic) long long contentType;
@property (nonatomic) double timestamp;
@property (nonatomic) long long extType;
@property (copy, nonatomic) NSString *ext;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long updateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)groupid;
+ (const void *)extType;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)busid;
+ (const void *)updateTime;
+ (const void *)content;
+ (const void *)timestamp;
+ (const void *)contentType;
+ (const void *)busType;
+ (const void *)ext;

- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)a0;
- (void).cxx_destruct;

@end
