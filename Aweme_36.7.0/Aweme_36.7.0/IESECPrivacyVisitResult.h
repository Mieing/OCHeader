@class NSError;

@interface IESECPrivacyVisitResult : NSObject

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *anyError;
@property (retain, nonatomic) NSError *appleError;
@property (retain, nonatomic) NSError *policyError;

- (void).cxx_destruct;

@end
