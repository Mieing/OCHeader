@class CKSChangeRecorder, NSString;

@interface CKSChangeRecorderWrapper : NSObject <CKDDDataChangeRecorder>

@property (retain, nonatomic) CKSChangeRecorder *recorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
