@class NSString, NSNumber, NSDictionary;

@interface IESECLigoComponentInitModel : NSObject <IESECLigoLynxViewDataProtocol>

@property (copy, nonatomic) NSString *bizRegionName;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *params;
@property (retain, nonatomic) NSNumber *businessType;
@property (nonatomic) long long componentType;
@property (copy, nonatomic) NSDictionary *localAddParams;
@property (retain, nonatomic) id DIContext;
@property (nonatomic) long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
