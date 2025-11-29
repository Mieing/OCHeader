@class NSString;

@interface MMWording : NSObject

@property (readonly, nonatomic) BOOL needshow;
@property (readonly, nonatomic) NSString *entryTip;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subTitle;
@property (readonly, nonatomic) NSString *desc;
@property (readonly, nonatomic) NSString *subDesc;

+ (id)WordingWithNeedshow:(BOOL)a0 entryTip:(id)a1 title:(id)a2 subTitle:(id)a3 desc:(id)a4 subDesc:(id)a5;

- (id)initWithNeedshow:(BOOL)a0 entryTip:(id)a1 title:(id)a2 subTitle:(id)a3 desc:(id)a4 subDesc:(id)a5;
- (id)description;
- (void).cxx_destruct;

@end
