@class NSString, NSMutableArray;

@interface IESECElementLoopText : GPBMessage

@property (retain, nonatomic) NSMutableArray *textsArray;
@property (readonly, nonatomic) unsigned long long textsArray_Count;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) long long size;
@property (nonatomic) BOOL bold;
@property (nonatomic) long long animGap;

+ (id)descriptor;

@end
