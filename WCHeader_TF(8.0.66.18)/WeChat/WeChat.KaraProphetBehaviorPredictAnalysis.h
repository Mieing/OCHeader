@class NSString, NSNumber;

@interface WeChat.KaraProphetBehaviorPredictAnalysis : NSObject <PBCoding, WCTColumnCoding> {
    void /* unknown type, empty encoding */ time;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ modelDescription;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSNumber *time;
@property (nonatomic, copy) NSString *error;
@property (nonatomic, copy) NSString *modelDescription;
@property (nonatomic, retain) void /* unknown type, empty encoding */ extractFeatures;

+ (void)PBArrayAdd_time;
+ (void)PBArrayAdd_error;
+ (void)PBArrayAdd_modelDescription;
+ (void)PBArrayAdd_extractFeatures;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
