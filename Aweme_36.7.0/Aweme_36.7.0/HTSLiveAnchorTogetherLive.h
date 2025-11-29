@class NSString, NSMutableArray;

@interface HTSLiveAnchorTogetherLive : IESLivePBBaseMessage

@property (nonatomic) long long isTogetherLive;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL isShow;

+ (id)descriptor;

- (long long)isTogetherLive;

@end
