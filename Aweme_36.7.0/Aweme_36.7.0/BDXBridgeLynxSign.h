@class NSArray, NSNumber;

@interface BDXBridgeLynxSign : NSObject

@property (nonatomic) unsigned long long verifyType;
@property (nonatomic) long long feID;
@property (nonatomic) unsigned long long totalLength;
@property (copy, nonatomic) NSArray *signSuites;
@property (retain, nonatomic) NSNumber *checkErrorCode;

- (void).cxx_destruct;

@end
