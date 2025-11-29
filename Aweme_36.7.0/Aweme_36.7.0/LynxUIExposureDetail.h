@class NSString, NSDictionary, LynxUI;

@interface LynxUIExposureDetail : NSObject

@property (copy, nonatomic) NSString *exposureScene;
@property (copy, nonatomic) NSString *exposureID;
@property (copy, nonatomic) NSString *internalSignature;
@property (nonatomic) long long sign;
@property (weak, nonatomic) LynxUI *ui;
@property (retain, nonatomic) NSDictionary *dataSet;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) NSDictionary *useOptions;

- (BOOL)isEqualToExposureDetail:(id)a0;
- (id)initWithUI:(id)a0 uniqueIdentifier:(id)a1 extraData:(id)a2 useOptions:(id)a3;
- (void).cxx_destruct;
- (id)toDictionary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
