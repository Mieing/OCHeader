@class GPBInt64Array, NSMutableDictionary;

@interface TIMXPBNBlockMembersResponseBody : GPBMessage

@property (retain, nonatomic) GPBInt64Array *failedMembersArray;
@property (readonly, nonatomic) unsigned long long failedMembersArray_Count;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
