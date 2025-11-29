@class NSString, ContactsItemView;

@interface NewContactsItemCell : MMMultiMenuTableViewCell <ContactsItemViewDelegate> {
    ContactsItemView *m_contactsItemView;
}

@property (nonatomic) BOOL m_bHideOpenIMDesc;
@property (nonatomic) BOOL bAlwayShowDefaultImage;
@property (nonatomic) BOOL bShowTextState;
@property (readonly, nonatomic) ContactsItemView *contactsItemView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initContactItemView;
- (void)prepareForReuse;
- (void)updateWithContact:(id)a0;
- (void).cxx_destruct;

@end
