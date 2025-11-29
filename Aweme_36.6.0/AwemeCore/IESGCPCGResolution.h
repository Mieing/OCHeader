@class NSString;
@protocol XPlayResolution;

@interface IESGCPCGResolution : NSObject <IESGCPCGResolution>

@property (retain, nonatomic) id<XPlayResolution> resolution;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long resolutionType;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPlayResolution:(id)a0;
- (id)convertToDict;
- (void).cxx_destruct;

@end
