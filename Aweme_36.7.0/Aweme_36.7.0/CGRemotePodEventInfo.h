@class NSError, NSDictionary, NSString;

@interface CGRemotePodEventInfo : NSObject <XPlayRemotePodEventInfo>

@property (nonatomic) unsigned long long result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
