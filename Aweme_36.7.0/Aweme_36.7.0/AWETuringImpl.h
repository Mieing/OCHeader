@class BDTuring, AWETuringConfig, NSString;

@interface AWETuringImpl : HTSService <BDTuringConfigDelegate, AWETuring>

@property (retain, nonatomic) BDTuring *turing;
@property (retain, nonatomic) AWETuringConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithConfig:(id)a0;
+ (id)sharedInstance;

- (id)getTuringInstance;
- (void)verificationCheck:(long long)a0 completion:(id /* block */)a1;
- (void)verificationCheckWithParameter:(id)a0 configString:(id)a1 completion:(id /* block */)a2;
- (void)verificationCheckWithParameter:(id)a0 completion:(id /* block */)a1;
- (BOOL)allowSensorCollection;
- (id)secUserID;
- (id)userID;
- (void).cxx_destruct;
- (id)sessionID;
- (id)deviceID;
- (id)installID;

@end
