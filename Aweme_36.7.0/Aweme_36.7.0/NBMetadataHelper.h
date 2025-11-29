@class NSString, NBPhoneMetaData;

@interface NBMetadataHelper : NSObject

@property (retain, nonatomic) NBPhoneMetaData *cachedMetaData;
@property (retain, nonatomic) NSString *cachedMetaDataKey;

+ (id)stringByTrimming:(id)a0;
+ (id)normalizeNonBreakingSpace:(id)a0;
+ (BOOL)hasValue:(id)a0;
+ (id)phoneNumberDataMap;
+ (id)CCode2CNMap;
+ (id)CN2CCodeMap;
+ (id)regionCodeFromCountryCode:(id)a0;
+ (id)countryCodeFromRegionCode:(id)a0;

- (void).cxx_destruct;
- (id)getAllMetadata;
- (id)getMetadataForRegion:(id)a0;
- (id)getMetadataForNonGeographicalRegion:(id)a0;

@end
