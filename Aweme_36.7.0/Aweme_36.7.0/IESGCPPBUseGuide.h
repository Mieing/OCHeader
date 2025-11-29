@class NSString, NSMutableArray, GPBInt64ObjectDictionary;

@interface IESGCPPBUseGuide : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *stepsArray;
@property (readonly, nonatomic) unsigned long long stepsArray_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *titles;
@property (readonly, nonatomic) unsigned long long titles_Count;

+ (id)descriptor;

@end
