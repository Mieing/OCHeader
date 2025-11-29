@class NSString, NSDictionary, NSArray, NSNumber;

@interface WeChat.KaraProphetBehaviorExtractFeaturesAnalysis : NSObject <PBCoding, WCTColumnCoding> {
    void /* unknown type, empty encoding */ time;
    void /* unknown type, empty encoding */ heaviest;
    void /* unknown type, empty encoding */ nulls;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSNumber *time;
@property (nonatomic, copy) NSDictionary *heaviest;
@property (nonatomic, copy) NSArray *nulls;

+ (void)PBArrayAdd_time;
+ (void)PBArrayAdd_heaviest;
+ (void)PBArrayAdd_nulls;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
