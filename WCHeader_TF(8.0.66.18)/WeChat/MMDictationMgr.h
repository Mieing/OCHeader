@class MMDictationReporter, NSString;

@interface MMDictationMgr : MMUserService <MMServiceProtocol>

@property (class, readonly, nonatomic) MMDictationMgr *shared;

@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isForwardEnabled;
@property (nonatomic) BOOL isAttachmentEnabled;
@property (retain, nonatomic) MMDictationReporter *reporter;
@property (nonatomic) int educationCount;
@property (nonatomic) int inactiveEducationCount;
@property (nonatomic) BOOL shouldShowIconWhenInactive;
@property (nonatomic) BOOL inactiveEducationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)educationKey;
- (void)increaseEducationCount;
- (void)markEducationDone;
- (BOOL)shouldShowEducation;
- (id)inactiveEducationKey;
- (void)increaseInactiveEducationCount;
- (BOOL)shouldShowInactiveEducation;
- (void)markInactiveEducationDone;
- (id)attachmentEducationKey;
- (BOOL)shouldShowAttachmentEducation;
- (void)markAttachmentEducationDone;
- (void).cxx_destruct;

@end
