@class NSString, NSDictionary;

@interface IESECSmartServiceOutputData : NSObject <IESECSmartServiceOutputData>

@property (retain, nonatomic) NSString *label;
@property (nonatomic) float labelScore;
@property (retain, nonatomic) NSDictionary *scoreMap;
@property (nonatomic) float value;
@property (nonatomic) float threshold;
@property (retain, nonatomic) NSDictionary *outParams;
@property (retain, nonatomic) NSDictionary *extOutParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
