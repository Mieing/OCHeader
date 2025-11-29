@class NSString;

@interface ACCCoverEditImageSelectPageInputData : ACCSecondaryPageInputData

@property (nonatomic) BOOL isCoverEdit;
@property (copy, nonatomic) NSString *currentProjectUUID;
@property (copy, nonatomic) id /* block */ didSelectProjectUUIDBlock;

- (void).cxx_destruct;

@end
