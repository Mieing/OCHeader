@class NSNumber, NSString, IESLiveGiftListRequestParams;

@interface IESLiveGiftAPIParams : NSObject

@property (retain, nonatomic) IESLiveGiftListRequestParams *linkParams;
@property (retain, nonatomic) NSNumber *giftBaseVersion;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) long long templateType;
@property (retain, nonatomic) NSString *searchKey;
@property (retain, nonatomic) NSNumber *imageTemplateType;
@property (copy, nonatomic) id /* block */ preprocessor;

- (void).cxx_destruct;

@end
