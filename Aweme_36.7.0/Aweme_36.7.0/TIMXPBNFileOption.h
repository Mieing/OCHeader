@class NSMutableArray;

@interface TIMXPBNFileOption : GPBMessage

@property (retain, nonatomic) NSMutableArray *urlsArray;
@property (readonly, nonatomic) unsigned long long urlsArray_Count;

+ (id)descriptor;

@end
