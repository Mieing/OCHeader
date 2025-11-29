@class NSMutableArray;

@interface IESECUrlImage : GPBMessage

@property (retain, nonatomic) NSMutableArray *URLListArray;
@property (readonly, nonatomic) unsigned long long URLListArray_Count;
@property (nonatomic) long long width;
@property (nonatomic) long long height;

+ (id)descriptor;

@end
