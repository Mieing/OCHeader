@class NSArray, NSString;
@protocol XPlayResolution;

@interface IESGCPXPlayGameAutoResolution : NSObject <IESGCPCGResolution>

@property (readonly, nonatomic) id<XPlayResolution> currentResolution;
@property (readonly, nonatomic) id<XPlayResolution> lowerResolution;
@property (readonly, nonatomic) id<XPlayResolution> higherResolution;
@property (nonatomic) long long innerIndex;
@property (retain, nonatomic) NSArray *trueResolutions;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long resolutionType;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPlayResolutions:(id)a0;
- (void)changeCurrentResolutionTo:(id)a0;
- (id)getTargetResolutionWithDirection:(unsigned long long)a0;
- (id)convertToDict;
- (void).cxx_destruct;

@end
