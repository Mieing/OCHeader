@class NSString, FinderLiveQRCodePosterStyle;

@interface MMFinderLiveNoticePosterStyleRecord : NSObject <WCTTableCoding>

@property (nonatomic) unsigned long long elementIndex;
@property (retain, nonatomic) FinderLiveQRCodePosterStyle *style;
@property (nonatomic) unsigned int styleVersion;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)elementIndex;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_elementIndex;
+ (const void *)style;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_style;
+ (const void *)styleVersion;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_styleVersion;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end
