@class NSString, StatusExtInfo, TextStateWeAppV6Stranger;

@interface TextStateExternModel : NSObject

@property (retain, nonatomic) NSString *textStateId;
@property (retain, nonatomic) StatusExtInfo *statusExtInfo;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) TextStateWeAppV6Stranger *v6Stranger;
@property (retain, nonatomic) NSString *distance;
@property (nonatomic) BOOL isLiked;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)generateTextState;
- (void).cxx_destruct;

@end
