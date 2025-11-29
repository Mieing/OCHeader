@class NSString, NSArray, NSNumber;

@interface AWELocalMomentNotesInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *texts;
@property (nonatomic) BOOL hasDigged;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) NSNumber *textTTL;
@property (nonatomic) long long notesType;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isDraft;
@property (readonly, nonatomic) unsigned long long cfItemType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
