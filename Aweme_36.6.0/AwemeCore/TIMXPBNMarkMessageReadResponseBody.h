@class NSMutableArray;

@interface TIMXPBNMarkMessageReadResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *markMessageSuccessInfosArray;
@property (readonly, nonatomic) unsigned long long markMessageSuccessInfosArray_Count;

+ (id)descriptor;

@end
