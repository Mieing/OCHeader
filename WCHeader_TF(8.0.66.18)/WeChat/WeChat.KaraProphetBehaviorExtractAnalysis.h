@class NSString, NSNumber;

@interface WeChat.KaraProphetBehaviorExtractAnalysis : NSObject <PBCoding, WCTColumnCoding> {
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ bytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *error;
@property (nonatomic, retain) NSNumber *bytes;
@property (nonatomic, retain) void /* unknown type, empty encoding */ extractFeatures;

+ (void)PBArrayAdd_error;
+ (void)PBArrayAdd_bytes;
+ (void)PBArrayAdd_extractFeatures;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
