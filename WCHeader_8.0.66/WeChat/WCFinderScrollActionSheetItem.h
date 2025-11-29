@class NSMutableDictionary;

@interface WCFinderScrollActionSheetItem : MMScrollActionSheetItem

@property (copy, nonatomic) id /* block */ selection;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) NSMutableDictionary *finderUserInfoDict;
@property (nonatomic) long long sectionType;
@property (copy, nonatomic) id /* block */ reportSetter;

+ (id)itemForFlag:(unsigned long long)a0 withContentVM:(id)a1;
+ (id)baseKey;
+ (id)playBackInfoKey;

- (id)reportEid;
- (id)udfDict;
- (id)sdkViewId;
- (id)sdkParamsDict;
- (id)playBackInfo;
- (void)setPlayBackInfo:(id)a0;
- (void)clearPlayBackInfo;
- (id)description;
- (void).cxx_destruct;

@end
