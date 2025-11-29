@class NSMutableArray;

@interface TIMXPBNDiffParticipantsInfo : GPBMessage

@property (retain, nonatomic) NSMutableArray *updatedParticipantsArray;
@property (readonly, nonatomic) unsigned long long updatedParticipantsArray_Count;
@property (retain, nonatomic) NSMutableArray *removedParticipantsArray;
@property (readonly, nonatomic) unsigned long long removedParticipantsArray_Count;

+ (id)descriptor;

@end
