@class NSArray, AWEHPTabGuideButtonCandidate, NSString;

@interface AWEHPTabGuideButtonCheckResultModel : NSObject <AWEHPTabGuideCheckResultModelProtocol>

@property (retain, nonatomic) NSArray *allCandidates;
@property (retain, nonatomic) NSArray *availableCandidates;
@property (retain, nonatomic) NSArray *pizzaCandidates;
@property (retain, nonatomic) AWEHPTabGuideButtonCandidate *pitayaCandidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
