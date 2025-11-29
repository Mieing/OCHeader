@class NSString, NSArray;

@interface IESLLLiveShelfCardTabListItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tabId;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabNameEn;
@property (copy, nonatomic) NSArray *cardList;
@property (copy, nonatomic) NSString *emptyTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
