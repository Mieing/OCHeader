@class NSMutableArray;

@interface HTSLivePublicScreenBottomInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *bottomCardsArray;
@property (readonly, nonatomic) unsigned long long bottomCardsArray_Count;

+ (id)descriptor;

@end
