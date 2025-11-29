@class NSString, NSArray, CJPayUnifyVerifyPopUpButtonModel;
@protocol CJPayUnifyVerifyPopUpContentModel;

@interface CJPayUnifyVerifyPopUpModel : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray<CJPayUnifyVerifyPopUpContentModel> *contentList;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) long long timeout;
@property (copy, nonatomic) NSString *timeoutColor;
@property (retain, nonatomic) CJPayUnifyVerifyPopUpButtonModel *buttonForward;
@property (retain, nonatomic) CJPayUnifyVerifyPopUpButtonModel *buttonBackward;
@property (retain, nonatomic) CJPayUnifyVerifyPopUpButtonModel *buttonSingle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
