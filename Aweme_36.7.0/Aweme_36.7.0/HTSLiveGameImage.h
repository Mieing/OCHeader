@class NSString, NSMutableArray, HTSLiveThemeColor;

@interface HTSLiveGameImage : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *URLListArray;
@property (readonly, nonatomic) unsigned long long URLListArray_Count;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (nonatomic) long long rotation;
@property (retain, nonatomic) HTSLiveThemeColor *themeColor;
@property (nonatomic) BOOL hasThemeColor;

+ (id)descriptor;

@end
