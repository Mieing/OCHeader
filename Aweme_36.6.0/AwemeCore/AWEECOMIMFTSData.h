@class NSString;

@interface AWEECOMIMFTSData : NSObject <WCTTableCoding, AWEECOMIMFTSDataProtocol> {
    BOOL isAutoIncrement;
    long long lastInsertedRowID;
}

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

+ (const void *)extType;
+ (const void *)groupid;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)docid;
+ (const void *)busid;
+ (const void *)updateTime;
+ (const void *)content;
+ (const void *)timestamp;
+ (const void *)contentType;
+ (const void *)busType;
+ (const void *)ext;

- (void)setLastInsertedRowID:(long long)a0;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)a0;
- (void).cxx_destruct;
- (long long)lastInsertedRowID;

@end
