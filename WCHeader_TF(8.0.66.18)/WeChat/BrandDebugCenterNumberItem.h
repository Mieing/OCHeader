@class MMUILabel, NSString, NSNumber, MMUIButton;

@interface BrandDebugCenterNumberItem : NSObject <IBrandDebugCenterItemProtocol> {
    MMUIButton *m_itemView;
    MMUILabel *m_titleLabel;
    MMUILabel *m_descLabel;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *number;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
