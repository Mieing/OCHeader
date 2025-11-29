@class NSString, NLECommit_OC;
@protocol AEKMegaData;

@interface AEKCommit : NSObject <AEKCommit>

@property (retain, nonatomic) NLECommit_OC *commit;
@property (copy, nonatomic) NSString *draftFolder;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) long long timeStamp;
@property (readonly, nonatomic) id<AEKMegaData> megaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNLECommit:(id)a0 draftFolder:(id)a1;
- (void).cxx_destruct;

@end
