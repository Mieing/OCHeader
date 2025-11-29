@class BmfSharp;

@interface BDImageBMFSharpStorage : NSObject

@property (retain, nonatomic) BmfSharp *sharpProcess;
@property (nonatomic) unsigned long long sharpAlgorithm;

- (void).cxx_destruct;

@end
