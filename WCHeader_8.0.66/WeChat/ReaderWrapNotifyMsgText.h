@class NSString, NSArray;

@interface ReaderWrapNotifyMsgText : NSObject <NSCopying>

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *lightColorStr;
@property (retain, nonatomic) NSString *darkColorStr;
@property (nonatomic) double size;
@property (nonatomic) double lineHeight;
@property (nonatomic) BOOL bBold;
@property (nonatomic) unsigned int maxLineCount;
@property (retain, nonatomic) NSArray *contentList;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)lightColor;
- (id)darkColor;
- (void).cxx_destruct;

@end
